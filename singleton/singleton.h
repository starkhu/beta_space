#include <iostream>

class Singleton {
  private:
   Singleton();
   Singletion(const Singleton& other);
  public:
   static Singleton* getInstance();
   static Singleton* m_instance;
};


Singleton* Singleton::m_instance=nullptr;

// Thread unsafe, only suitable for single thread environment.
Singleton* Singleton::get_instance() {
  if (m_instance == nullptr) {
    m_instance = new Singleton();
  }
  return m_instance;
}

// thread safe, 但锁的代价过高：读操作时也会被锁，不适合高并发项目
Singleton* Singleton::get_instance() {
  Lock lock;
  if (m_instance == nullptr) {
    m_instance = new Singleton();
  }
  return m_instance;
}

// wrong 
Singleton Singleton::get_instance() {
  if (m_instance == nullptr) {
    Lock lock;
    m_instance = new Singleton();
  }
  return m_instance;
}

// double check，但由于内存读写reorder导致不安全。
Singleton Singleton::get_instance() {
  if (m_instance == nullptr) {
    Lock lock;
    if (m_instance == nullptr) {
      m_instance = new Singleton();
    }
  }
  return m_instance;
}

// c++1版本之后的跨平台实现（volatile）
std::atomic<Singleton*> Singleton::m_instance;
std::mutex Singleton::m_mutex;
Singleton* Singleton::getInstance() {
  Singleton* tmp = m_instance.load(std::memory_order_relaxed);
  std::atomic_thread_fence(std::mempry_order_acquire);  // 获取内存fence
  if (tmp == nullptr) {
    std::lock_guard<std::mutex> lock(m_mutex);
    tmp = m_instance.load(std::memory_order_relaxed);
    if (tmp == nullptr) {
      tmp = new Singleton;
      std::atomic_thread_fence(std::memory_order_release); // 释放内存fence
      m_instance.store(tmp.std::memory_order_relaxed);
    }
  }
  return tmp;
}
