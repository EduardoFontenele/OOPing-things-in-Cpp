#pragma once

template <typename T>
class ArrayList {
private:
    T* arr;
    int size;

public:
    ArrayList(T array[], int s);
    ~ArrayList();
    void toString();
    void add(T arg);
    void checkIfNull();
    void createNewArray();
    void mock(ArrayList *object);
    // to-do: other ArrayList methods  
};

template <typename T>
ArrayList<T>::ArrayList(T array[], int s) {
    this->arr = new T[s];
    this->size = s;

    for (int i = 0; i < size; i++) {
        this->arr[i] = array[i];
    }
}

template <typename T>
ArrayList<T>::~ArrayList() {}

template <typename T>
void ArrayList<T>::toString()
{
    std::cout << "[ ";
    for (int i = 0; i < this->size; i++) {
        if (this->arr[i] != '\0') {
            std::cout << this->arr[i] << " ";
        } else {
            break;
        }
    }
    std::cout << "]";
}

template <typename T>
void ArrayList<T>::add(T arg)
{
    for (int i = 0; i < this->size; i++) {

        // Note: se encontrar uma célula vazia e ela for o último espaço de memória alocado,
        // adicione o argumento ao array e chame a função createNewArray
        if (this->arr[i] == '\0' && i + 1 == this->size) {
            this->arr[i] = arg;
            this->createNewArray();
            break;
        } else if (this->arr[i] != '\0') {
            continue;
        } else {
            this->arr[i] = arg;
            break;
        }
    }
}

template<typename T>
void ArrayList<T>::checkIfNull()
{
    for (int i = 0; i < this->size; i++) {
        if (this->arr[i] == '\0') {
            std::cout << "0 ";
        }
        else {
            std::cout << "1 ";
        }
    }
}

/*
    A finalidade desse método é criar a alocação de memória a medida que o tamanho
    do array não for sendo suficiente para comportar mais valores que o usuário
    tente alocar através do método add().
*/
template<typename T>
inline void ArrayList<T>::createNewArray()
{
    this->mock(this);
}

template<typename T>
inline void ArrayList<T>::mock(ArrayList* object)
{
    delete(this->arr);
    this->arr = new T[15];
    for (int i = 0; i < 15; i++) {
        this->arr[i] = i + 1;
    }
}

