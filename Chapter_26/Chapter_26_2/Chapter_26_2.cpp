template <typename T>
class deepcopy_smart_ptr{

    private:

        T* object;

    public:
        
        // ... other functions

        // copy constructor of the deep pointer
        deepcopy_smart_ptr(const deepcopy_smart_ptr& source){
            // Clone is virtual : ensures deep copy of derived class object
            object = source->Clone();
        }

        // copy assignment operator of the deep pointer
        deepcopy_smart_ptr& operator=(const deepcopy_smart_ptr& source){
            if(object){
                delete object;
                
            }
            object = source->Clone();
        }
};