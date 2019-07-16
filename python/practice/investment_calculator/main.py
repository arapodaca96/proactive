# This will only be calculated on a yearly basis, not monthly, daily, etc.
# and will show each year starting at the month below

# -- Savings
total_savings = 10000
savings_rate = 0
rental_profit = 0

 # -- Revenue
take_home_pay = 0
rent_revenue = 0

# -- Expenses
upfront_cost = 0
other_upfront = 0
housing_cost = 0
other_expenses = 700
mortgage_expenses = 0
management_expenses = 0

# -- Other
year = 2019
month = 'August'
num_properties = 0
income = 0

# ---------------------------------------------- MAIN

cont = 'y'
while cont == 'y':
    cont = 'q'
    while cont != 'y' and cont != 'n':
        cont = raw_input('Keep going [y/n]? ').strip().lower()
    if cont == 'n':
        break

    # -- Input here
    income = int(raw_input('Enter income: $'))
    take_home_pay = int(raw_input('Enter take home pay: $'))
    housing_cost = int(raw_input('Enter housing cost per month: $'))
    other_expenses = int(raw_input('Enter other expenses per month: $'))
    print ''
    new_properties = int(raw_input('How many new properties for the next year? '))
    upfront_cost = int(raw_input('Enter upfront cost per property: $'))
    rent_revenue = int(raw_input('Enter monthly rent revenue: $'))
    mortgage_expenses = int(raw_input('Enter monthly property expenses: $'))
    management_expenses = int(raw_input('Enter management cost per month: $'))
    print ''
    other_upfront = int(raw_input('Enter any other upfront costs: $'))

    # -- Calculations here
    num_properties = num_properties + new_properties
    total_savings = total_savings - (upfront_cost * new_properties) - other_upfront
    rental_profit = rent_revenue - mortgage_expenses - management_expenses
    savings_rate = (take_home_pay / 12.0) - housing_cost - other_expenses + rental_profit
    total_savings = total_savings + savings_rate * 12.0

    # -- Print out here
    print ''
    print '#' + '-' * 40 + '#'
    print '# Year: {} ({})'.format(year, month)
    print '#        '
    print '#    Gross income: ${}'.format(income)
    print '#        Net income: ${}'.format(take_home_pay)
    print '#        Housing:    ${}/mo'.format(housing_cost)
    print '#        Other:      ${}/mo'.format(other_expenses)
    print '#        '
    print '#    Properties: {} (Expected)'.format(num_properties)
    print '#        Upfront: ${}'.format(upfront_cost)
    print '#        Rent: ${}/mo'.format(rent_revenue)
    print '#        Cost: ${}/mo'.format(mortgage_expenses)
    print '#        Management cost: ${}/mo'.format(management_expenses)
    print '#        Profit: ${}/mo'.format(rental_profit)
    print '#        '
    print '#    Savings rate: ${0:.2f}/mo'.format(savings_rate)
    print '#    Total saved: ${0:.0f}'.format(total_savings)
    print '#        '
    print '#' + '-' * 40 + '#' + '\n'

    year = year + 1
