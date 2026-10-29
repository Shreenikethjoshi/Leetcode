# Write your MySQL query statement below
select max(Salary) as SecondHighestSalary from Employee where salary < (select max(salary) from Employee);