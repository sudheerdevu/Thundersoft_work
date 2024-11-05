import data_clean as dd

df=dd.load_data('path')
df=dd.handle_duplicates(df)
print(df)