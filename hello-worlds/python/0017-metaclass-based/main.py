# A metaclass that, at class-creation time, injects a greet() method onto
# the new class. The class body itself is empty — the behavior is added
# entirely by the metaclass.


class GreeterMeta(type):
    def __new__(mcs, name, bases, namespace):
        cls = super().__new__(mcs, name, bases, namespace)

        def greet(self):
            print("Hello, World!")

        cls.greet = greet
        return cls


class HelloWorld(metaclass=GreeterMeta):
    pass


HelloWorld().greet()
