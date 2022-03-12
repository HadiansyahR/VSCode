from atm_card import ATMCard

class Customer:
    #menyimpan nilai id, pin, dan balance customer
    def __init__(self, id, csPin = 1234, csBalance = 10000):
        self.id = id
        self.pin = csPin
        self.balance = csBalance

    #return nilai id
    def checkID(self):
        return self.id

    #return nilai pin
    def checkPin(self):
        return self.pin

    #return nilai saldo
    def checkBalance(self):
        return self.balance

    #method debit
    def withdrawBalance(self, nominal):
        self.balance -= nominal

    #method deposit
    def depositBalance(self, nominal):
        self.balance += nominal