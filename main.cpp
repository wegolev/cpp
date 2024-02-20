
#include <iostream>
#include <thread>

void hello() {
    std::cout<<"Hello Concurrent World\n";
}

int main() {
    std::thread t(hello);
    t.join();
}

/*
#include <iostream>
int main() {
     std::cout << "Hello World\n";
}
*/