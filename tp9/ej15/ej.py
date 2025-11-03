class Vehiculo_Electrico:
    def __init__(self, capacidad_maxima_bateria):
        self.capacidad_maxima_bateria = capacidad_maxima_bateria
        self.bateria_cargada = 0

    def cargar_bateria(self, kwh):
        if self.bateria_cargada + kwh <= self.capacidad_maxima_bateria:
            self.bateria_cargada = self.bateria_cargada + kwh

    def descripcion(self):
        print("Tipo de vehiculo: electrico.")


class Vehiculo_Combustion:
    def __init__(self, capacidad_maxima_tanque):
        self.capacidad_maxima_tanque = capacidad_maxima_tanque
        self.litros_cargados = 0

    def cargar_combustible(self, litros):
        if self.litros_cargados + litros <= self.capacidad_maxima_tanque:
            self.litros_cargados = self.litros_cargados + litros 


class Vehiculo_Hibrido(Vehiculo_Electrico,Vehiculo_Combustion):
    pass

