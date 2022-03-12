class ATMCard:
    #method yang menyimpan nilai awal pin dan saldo
    def __init__(self, defaultPin, defaultBalance):
        self.defaultPin = defaultPin
        self.defaultBalance = defaultBalance

    #method untuk mengembalikan nilai default pin
    def checkDefPin(self):
        return self.defaultPin

    #method untuk mengembalikan nilai default saldo
    def checkDefBalance(self):
        return self.defaultBalance