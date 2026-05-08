
# Get basic salary
basic = float(input("Enter Basic Salary: "))

# Calculate allowances
hra = basic * 0.20
da = basic * 0.10

# Calculate gross pay
gross_pay = basic + hra + da

# Calculate deduction
pf = basic * 0.05

# Calculate net pay
net_pay = gross_pay - pf

# Display results
print("\nGross Pay:", gross_pay)
print("Net Pay:", net_pay)