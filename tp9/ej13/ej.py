from typing import TypeVar, Generic

T = TypeVar("T")

def mayor(a: T, b : T) -> T:
    return a if a > b else b

print(mayor("agustin","hernan"))
