import sqlite3
import pandas as pd

read = pd.read_csv('people_data.csv')
read.columns = read.columns.str.strip()
connection = sqlite3.connect('read.db')
read.to_sql('read', connection, if_exists='replace')
connection.close()
