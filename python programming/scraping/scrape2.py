from lib2to3.pgen2 import driver
from selenium import webdriver
from bs4 import BeautifulSoup
import pandas as pd

driver = webdriver.Chrome("D:\Ade nitip\py\chromedriver.exe")
products=[] #List to store name of the product
prices=[] #List to store price of the product
ratings=[] #List to store rating of the product
driver.get("https://www.tokopedia.com/find/lampu-tidur")

content = driver.page_source
soup = BeautifulSoup(content)
for a in soup.find_all('a', href = True, attrs={'class': 'css-974ipl'}):
    name = a.find('div', attrs = {'class': 'css-1b6t4dn'})
    price = a.find('div', attrs = {'class': 'css-1ksb19c'})
    rate = a.find('span', attrs = {'class': 'css-t70v7i'})

products.append(name.text)
prices.append(price.text)
ratings.append(rate.text)