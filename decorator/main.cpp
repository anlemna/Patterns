using namespace std;
#include <QCoreApplication>
#include <cstring>
#include <iostream>
#include <memory>

class IComponent {
public:
    virtual void pattern() = 0;
    virtual ~IComponent(){}
};

class Object : public IComponent {
public:
    virtual void pattern() {
        cout<<" great"<<endl;
    }
};

class One : public IComponent {
    shared_ptr<IComponent> m_component;

public:
    One(shared_ptr<IComponent> Object): m_component(Object) {}

    virtual void pattern() {
        cout << " works";
        m_component->pattern();
    }
};

class Two : public IComponent {
    shared_ptr<IComponent> m_component;

public:
    Two(shared_ptr<IComponent> Object): m_component(Object) {}

    virtual void pattern() {
        cout << " Pattern";
        m_component->pattern();
    }
};

class Three : public IComponent {
    shared_ptr<IComponent> m_component;

public:
    Three(shared_ptr<IComponent> Object): m_component(Object) {}

    virtual void pattern() {
        cout << "The";
        m_component->pattern();
    }
};

int main() {
    Two obj(make_shared<One>(make_shared<Object>()));
    obj.pattern();

    return 0;
}
