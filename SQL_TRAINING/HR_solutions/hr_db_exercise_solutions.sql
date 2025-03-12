-- Q1. Write a query to display the names (first_name, last_name) using alias name “First Name", "Last Name"
SELECT first_name AS "First Name", last_name AS "Last Name" FROM employees;

-- Q2. Write a query to get unique department ID from employee table
SELECT DISTINCT department_id FROM employees;

-- Q3. Write a query to get all employee details from the employee table order by first name, descending
SELECT * FROM employees ORDER BY first_name DESC;

-- Q4. Write a query to get the names (first_name, last_name), salary, PF of all the employees (PF is calculated as 15% of salary)
SELECT first_name, last_name, salary, salary * 0.15 AS PF FROM employees;

-- Q5. Write a query to get the employee ID, names (first_name, last_name), salary in ascending order of salary
SELECT employee_id, first_name, last_name, salary FROM employees ORDER BY salary;

-- Q6. Write a query to get the total salaries payable to employees
SELECT SUM(salary) AS "Total Salaries" FROM employees;

-- Q7. Write a query to get the maximum and minimum salary from employees
SELECT MAX(salary) AS "Max Salary", MIN(salary) AS "Min Salary" FROM employees;

-- Q8. Write a query to get the average salary and number of employees working in the company
SELECT AVG(salary) AS "Average Salary", COUNT(employee_id) AS "Number of Employees" FROM employees;