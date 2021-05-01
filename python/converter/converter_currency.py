# A converter for international currency exchnage.
USD_to_GBP = 0.66   # Today's rate, US dollars to British Pounds
USD_to_EUR = 0.77   # Today's rate, US dollars to Euros
USD_to_JPY = 99.18  # Today's rate, US dollars to Japanese Yen
USD_to_INR = 59.52  # Today's rate, US dollars to Indian Rupees

GBP_sign   = '\u00A3' #Unicode values for non-ASCII currency symbols.
EUR_sign   = '\u20AC'
JPY_sign   = '\u00A5'
INR_sign   = '\u20B9'

dollars    = 1000 # The number of dollars to convert

pounds     = dollars * USD_to_GBP # Conversion calculations
euros      = dollars * USD_to_EUR
yen        = dollars * USD_to_JPY
rupees     = dollars * USD_to_INR

print('Today, $' + str(dollars))  # Printing the results
print('converts to ' + GBP_sign + str(pounds))
print('converts to ' + EUR_sign + str(euros))
print('converts to ' + JPY_sign + str(yen))
print('converts to ' + INR_sign + str(rupees))

