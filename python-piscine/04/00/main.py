import requests
from urllib import request
import sys
from bs4 import BeautifulSoup

class PokeWiki:
    def __init__(self, name: str):
        self.name = name
        self.url = "https://pokemon.fandom.com/wiki/" + name
        response = request.urlopen(self.url)
        self.soup = BeautifulSoup(response)
        response.close()

    def species(self):
        return (self.soup.text)

    def abilities(self):
        return (self.name)

def main():
    print("Which pokemon do you want to know?")
    name = sys.stdin.readline()
    poke = PokeWiki(name)
    print(poke.species())

if __name__ == '__main__':
    main()