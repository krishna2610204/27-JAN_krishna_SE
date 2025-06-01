-- Lab 1: Count employees per department
SELECT department_id, COUNT(*) AS employee_count
FROM employees
GROUP BY department_id;

-- Lab 2: Find average salary per department
SELECT department_id, AVG(salary) AS average_salary
FROM employees
GROUP BY department_id;
