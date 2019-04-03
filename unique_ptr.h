//
// Created by aknight on 3/21/19.
//

#ifndef LECTURE_UNIQUE_PTR_H
#define LECTURE_UNIQUE_PTR_H

namespace edu { namespace vcccd { namespace vc {
    template <class Type>
    class unique_ptr {
        Type *pointer;

    public:
        unique_ptr(Type *ptr) {
            pointer = ptr;
        }

        Type *release() {
            Type *temp = pointer;
            pointer = nullptr;
            return temp;
        }

        Type *get() {
            return pointer;
        }

        unique_ptr(): pointer(nullptr) {
        }

        ~unique_ptr() {
            delete pointer;
        }

        unique_ptr&operator =(Type* ptr) {
            if (pointer != nullptr) {
                delete pointer;
            }
            pointer = ptr;
        }

        Type &operator*() {
            return *pointer;
        }

        Type &operator ->() {
            return *ptr;
        }
    private:
        unique_ptr& operator =(const unique_ptr&) {
        }
        unique_ptr(const &unique_ptr other) {
        }

        unique_ptr(&&uniquePtr other) {
        }
    };
}}}

#endif //LECTURE_UNIQUE_PTR_H
