def load_data(path):
     # Loading the data from an Excel file and return a dataframe (table)
    return 'data frame'

def handling_missingvalues(df):
    # Removing the missing values and will return the dataframe after removing missing values
    return 'data frame after removing missing values'

def handle_duplicates(df):
    # It will remove duplicates and will return the dataframe without duplicates
    return 'data frame after removing duplicates'

if __name__=='__main__':
    path='desktop'
    df=load_data(path)
    df=handling_missingvalues(df)
    df=handle_duplicates(df)
    print(df)