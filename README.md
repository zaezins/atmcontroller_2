Simple ATM Controller

OS : OS X
compiler : clang
IDE : Xcode for OS X

1. Test Scenario
- scenario as bellow with console execution.
  1.1 Insert Card
    enter owner name, bank_name, account_number in this test code.
  1.2 PIN number
    enter the pin number (in this test code, any string will be ok in 80% probability)
  1.3 Select Account
    find Account for owner name, bank_name, account_number
    if no such account then return
  1.4 See Balance/Deposit/Withdraw
    information will be logged in console in this test code.
    
2. Design
- Repository Pattern
  repo_base: interface of repository 
  repo_impl: implementation of repository, this part will be changed or implemented if some requirement will be added or test scenario is changed.
  context: kind of Data storage, this part will be changed if data storage will be changed such as file system, database, or in memory.
           this test code doesn't allow add new customer information, only pre-defiend customer dummy information is allowed.

- Factory method Pattern
  in factory directory, there are some factory classes to create kind of object.
  if repository or context will be added, then this part will be changed(added condition to return object)
  
