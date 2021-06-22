class Salesperson:
	def __init__(self):
		self.name = 'nameless salesperson'

	def builder(self, s :str):
		self.name = s

	def __str__(self):
		return (self.name)
	
	def promote(self):
		return (Product())

class Product:
	def __str__(self):
		return ("This is the best product in the world.")

