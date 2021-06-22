import salesperson

def main():
	person = salesperson.Salesperson()
	print(person.__str__())
	person.builder("El")
	print(person.__str__())
	product = person.promote()
	print(product.__str__());

if __name__ == '__main__':
	main()