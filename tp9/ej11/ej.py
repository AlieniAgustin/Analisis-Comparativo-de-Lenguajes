from typing import TypeVar, Generic, List

# 1. Definimos la variable de tipo 'T'
T = TypeVar('T')

# 2. Hacemos que la clase herede de Generic[T]
class Pila(Generic[T]):
    def __init__(self) -> None:
        # Internamente usamos una lista que contendrá elementos de tipo T
        self._items: List[T] = []

    def apilar(self, item: T) -> None:
        self._items.append(item)

    def desapilar(self) -> T:
        if not self.esta_vacia():
            return self._items.pop()
        raise IndexError("La pila está vacía")

    def esta_vacia(self) -> bool:
        return len(self._items) == 0

    def cima(self) -> T:
        if not self.esta_vacia():
            return self._items[-1]
        raise IndexError("La pila está vacía")

# --- Uso de la clase genérica ---

# Instancia para enteros
pila_enteros = Pila[int]()
pila_enteros.apilar(10)
pila_enteros.apilar(20)
numero: int = pila_enteros.desapilar()
# pila_enteros.apilar("hola")  # Esto marcaría error en un linter estático (mypy), pero funcionaría en runtime.

# Instancia para strings
pila_strings = Pila[str]()
pila_strings.apilar("Mundo")
pila_strings.apilar("Hola")
texto: str = pila_strings.desapilar()

print(f"Numero sacado: {numero}")
print(f"Texto sacado: {texto}")
