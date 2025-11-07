class Vehiculo:
    def __init__(self, marca, modelo, **kwargs):
        super().__init__(**kwargs)
        self.marca = marca
        self.modelo = modelo

    def descripcion(self):
        return f"Marca: {self.marca}, Modelo: {self.modelo}"

class VehiculoCombustion(Vehiculo):
    def __init__(self, capacidad_tanque, **kwargs):
        super().__init__(**kwargs)
        self.capacidad_tanque = capacidad_tanque
        self.litros_actuales = 0

    def cargar_combustible(self, litros):
        # Simulación simple de carga sin exceder capacidad
        espacio = self.capacidad_tanque - self.litros_actuales
        carga_real = min(litros, espacio)
        self.litros_actuales += carga_real
        print(f"--> Carga combustible: {carga_real}L cargados. Tanque al {int((self.litros_actuales/self.capacidad_tanque)*100)}%.")

    def descripcion(self):
        return super().descripcion() + f" | Motor Combustión (Tanque: {self.capacidad_tanque}L)"

class VehiculoElectrico(Vehiculo):
    def __init__(self, capacidad_bateria, **kwargs):
        super().__init__(**kwargs)
        self.capacidad_bateria = capacidad_bateria
        self.kwh_actuales = 0

    def cargar_bateria(self, kwh):
        espacio = self.capacidad_bateria - self.kwh_actuales
        carga_real = min(kwh, espacio)
        self.kwh_actuales += carga_real
        print(f"--> Carga eléctrica: {carga_real}kWh cargados. Batería al {int((self.kwh_actuales/self.capacidad_bateria)*100)}%.")

    def descripcion(self):
        return super().descripcion() + f" | Motor Eléctrico (Batería: {self.capacidad_bateria}kWh)"

# Herencia Múltiple
class VehiculoHibrido(VehiculoElectrico, VehiculoCombustion):
    def __init__(self, marca, modelo, capacidad_tanque, capacidad_bateria):
        # Pasamos todos los argumentos como kwargs para que cada clase padre tome lo que necesita
        super().__init__(marca=marca, modelo=modelo, 
                         capacidad_tanque=capacidad_tanque, 
                         capacidad_bateria=capacidad_bateria)

    def descripcion(self):
        # Sobrescribimos para añadir la etiqueta de Híbrido al inicio o final si deseamos
        return "[HÍBRIDO] " + super().descripcion()

# --- Pruebas del Sistema ---

print("--- 1. Vehículo Eléctrico (Tesla Model 3) ---")
tesla = VehiculoElectrico(marca="Tesla", modelo="Model 3", capacidad_bateria=75)
print(tesla.descripcion())
tesla.cargar_bateria(30)

print("\n--- 2. Vehículo Combustión (Ford Mustang) ---")
mustang = VehiculoCombustion(marca="Ford", modelo="Mustang", capacidad_tanque=60)
print(mustang.descripcion())
mustang.cargar_combustible(50)

print("\n--- 3. Vehículo Híbrido (Toyota Prius) ---")
prius = VehiculoHibrido(marca="Toyota", modelo="Prius", capacidad_tanque=45, capacidad_bateria=8.8)
print(prius.descripcion())
# El híbrido puede usar métodos de ambos padres:
prius.cargar_combustible(20)
prius.cargar_bateria(5)
