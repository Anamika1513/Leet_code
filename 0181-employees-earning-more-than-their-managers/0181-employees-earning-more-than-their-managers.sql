# Write your MySQL query statement below
select e.name as Employee
FROM Employee e
JOIN Employee m
on e.managerId = m.id
where e.salary>m.salary