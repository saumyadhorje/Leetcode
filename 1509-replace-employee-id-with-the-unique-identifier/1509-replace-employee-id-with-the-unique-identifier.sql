# Write your MySQL query statement below
select e.name , euni.unique_id
FROM employees e
LEFT JOIN EmployeeUNI euni  
ON e.id = euni.id;