class Notebook:
      def __init__(self, firma, model, CPU, DDR, price):
            self.firma = firma
            self.model = model
            self.CPU = CPU
            self.DDR = DDR
            self.price = price
            self.infonotebook()

      def infonotebook(self):
            print("Firma: ", self.firma, "Model: ", self.model, "CPU: ", self.CPU, "DDR: ", self.DDR, "Price: ", self.price)

notebook1 = Notebook("Lenovo", "IdeaPad", "Intel", "4GB", "30000")
notebook2 = Notebook("Asus", "VivoBook", "Intel", "4GB", "25000")
notebook3 = Notebook("Acer", "Aspire", "Intel", "4GB", "20000")

