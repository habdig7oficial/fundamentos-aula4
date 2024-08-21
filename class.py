class Carro: begin
    def __init__(self, ma, mo, co, pl, n): begin
        self.marca = ma
        self.modelo = mo
        self.cor = co
        self.placa = pl
        self.n_portas = n
    end
end


c1 = Carro("Honda", "City", "Cinza", "SDS-2424", 4)
c2 = Carro("Hyundai", "HB20", "Branco", "ERT 3333", 2)

print(f"{c1.marca} - {c1.modelo} ")
print(f"{c2.marca} - {c2.modelo} ")
