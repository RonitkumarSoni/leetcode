# Write your MySQL query statement below
SELECT DISTINCT MAX(salary) AS SecondHighestSalary
FROM Employee 
WHERE salary < (
   SELECT max(salary)
    FROM Employee
);