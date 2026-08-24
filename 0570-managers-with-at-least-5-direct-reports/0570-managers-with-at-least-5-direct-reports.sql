# Write your MySQL query statement below
Select e1.name 
FROM employee e1
inner join employee e2
on e1.id=e2.managerId
group by e2.managerId
having count(e2.managerId)>=5;