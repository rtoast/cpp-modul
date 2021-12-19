#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array{
    private:
        T *_mas;
        int _size;

    public:

        Array(int sizeMas = 0){
            if (sizeMas < 0)
                throw ErrorSize();
            _size = sizeMas;
            _mas = new T[_size];
        }

        ~Array(){
            delete[] _mas;
        }

        Array(Array const &copy){
            *this = copy;
        }

        Array &operator= (Array const &equals){
            if (&equals == this)
                return (*this);
            _size = equals.size();
            _mas = new T[_size];
            for (int i = 0; i < _size; ++i)
                _mas[i] = equals._mas[i];
            return (*this);
        }

        T &operator[](int index){
            if (index < 0 || index >= _size)
                throw ErrorIndex();
            return (_mas[index]);
        }

        int size() const{
            return (_size);
        }

        class ErrorIndex : public std::exception{
            virtual const char *what() const throw(){return "Error: index";}
        };

        class ErrorSize : public std::exception{
            virtual const char *what() const throw(){return "Error: size";}
        };
};

#endif
