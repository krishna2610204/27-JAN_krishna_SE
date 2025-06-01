-- 1



CREATE TABLE employee_log (

    log_id INT AUTO_INCREMENT PRIMARY KEY,
    emp_id INT,
    action VARCHAR(20),
    log_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

DELIMITER //

CREATE TRIGGER after_employee_insert
AFTER INSERT ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employee_log(emp_id, action)
    VALUES (NEW.emp_id, 'INSERT');
END //

DELIMITER ;






-- 2

ALTER TABLE employees ADD COLUMN last_modified TIMESTAMP;

DELIMITER //

CREATE TRIGGER before_employee_update
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
    SET NEW.last_modified = NOW();
END //

DELIMITER ;
