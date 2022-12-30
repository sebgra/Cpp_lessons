template <typename T>
class smart_pointer{

    private:
        T* rawPtr;

    public:

        smart_pointer(T* pData) : rawPtr(pData) {} // constructor
        ~smart_pointer() { delete rawPtr;};  // destructor

        // copy constructor
        smart_pointer(const smart_pointer & anotherSP);

        // copy assignment operator
        smart_pointer& operator=(const smart_pointer & anotherSP);

        T& operator*(){ // dereferencing operator
        return *(rawPtr);
    }

    T* operator ->() const { // member access operator
        return rawPtr;
    }
};