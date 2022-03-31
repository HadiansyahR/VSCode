# Import libraries
import requests
from bs4 import BeautifulSoup
import pandas as pd

# Using requests
# Create URL object

url = 'https://www.transfermarkt.co.id/persib-bandung/startseite/verein/14105'

# Create object page
page = requests.get(url)

# parser-lxml = Change html to Python friendly format
# Obtain page's information
soup = BeautifulSoup(page.text, 'lxml')
soup

# Obtain information from table
table1 = soup.find('div', attrs={"class": "items"})
table1

# # Obtain every column titles
headers = []
for i in table1.find_all('th'):
    title = i.text
    headers.append(title)