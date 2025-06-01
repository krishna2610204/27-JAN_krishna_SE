CREATE VIEW EmployeeWithDept AS
SELECT e.emp_id, e.emp_name, e.salary, d.department_name
FROM employees e
JOIN departments d ON e.department_id = d.department_id;

SELECT * FROM EmployeeWithDept;



-- 2 
CREATE VIEW EmployeeWithDept AS
SELECT e.emp_id, e.emp_name, e.salary, d.department_name
FROM employees e
JOIN departments d ON e.department_id = d.department_id
WHERE e.salary >= 50000;

SELECT * FROM EmployeeWithDept;





