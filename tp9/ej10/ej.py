import inspect

class Persona:
    def person_method(self):
        pass

p = Persona()

print(inspect.isclass(Persona)) #true porque Persona es una clase 
print(inspect.isclass(p)) #false porque p no es una clase

print(inspect.isfunction(Persona.person_method)) #true 
print(inspect.ismethod(Persona.person_method)) #false 
print(inspect.ismethod(p.person_method)) #true


class A:
    pass 

class B(A):
    pass

class C(B):
    pass 

print(inspect.getmro(C)) #da la cadena de herencia: (C,B,A,object)
