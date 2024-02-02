#include <iostream>
#include <string>


class Animal {
protected:
    std::string name;
    int age;
    int weight;
public:
    // Конструктор по умолчанию
    Animal() {
        name = "noname";
        age = 0;
        weight = 0;
    }
    // Параметрический конструктор
    Animal(std::string name, int age, int weight) {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
};

class Cat :public Animal {
private:
    std::string type;
    std::string food;
public:
    Cat() : Animal() {
        type = "undefined";
        food = "undefined";
    }

    Cat(std::string name, std::string type, std::string food):Animal (name, age, weight)
        {
        this->type = type;
        this->food = food;
    }

    void setFood(std::string food) {
        this->food = food;
    }
    std::string getFood() {
        return this->food;
    }

    void voice () {
        std::cout << "Я " << name << " моя порода " << type << " : Mяу " << std::endl;
    }
    void eat(std::string foods) {
        std::cout << name << " съел " << foods << std::endl;
    }
};


 int main()
 {
  setlocale(LC_ALL, "Russian");
  int n, m;
  Cat cat("Кот", "Siam", "fish");
  cat.voice();
  cat.eat(cat.getFood());
  return 0;
 }