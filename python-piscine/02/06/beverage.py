class Product:
	def __init__(self, name: str, price: float, description: str):
		self.name = 'python' if not name else name
		self.price = 100 if not price else price
		self.description = 'an extraordinary programming language' if not description else description

	def __str__(self):
		return (self.name + ' : ' + self.description)

	def print_attr(self):
		print("name : " + self.name)
		print("price : " + str(self.price))
		print("description : " + self.description)
	
class Beverage(Product):
	def __init__(self, name: str, price: float, description: str, temperature: float):
		super().__init__(name, price, description)
		self.temperature = temperature

	def print_attr(self):
		super().print_attr()
		print("temperature : " + str(self.temperature))