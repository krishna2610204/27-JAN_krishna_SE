create database abc;

use abc;


CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(100)
);

CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    employee_name VARCHAR(100),
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(department_id)
);


-- Lab 1: Count employees per department
SELECT department_id, COUNT(*) AS employee_count
FROM employees
GROUP BY department_id;

-- Lab 2: Find average salary per department
SELECT department_id, AVG(salary) AS average_salary
FROM employees
GROUP BY department_id;


