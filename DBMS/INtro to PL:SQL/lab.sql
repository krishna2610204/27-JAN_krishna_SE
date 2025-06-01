-- 1 

SELECT COUNT(*) AS total_employees FROM employees;

-- 2 

SELECT IFNULL(SUM(order_amount), 0) AS total_sales FROM orders;
