class A:
    def say_hello(self):
        print("Hola desde A\n")

class B(A):
    def say_hello(self):
        print("Hola desde B\n")
        super().say_hello();

class C(A):
    def say_hello(self):
        print("Hola desde C\n")
        super().say_hello();

class D(B,C):
    pass

d = D()
d.say_hello()
