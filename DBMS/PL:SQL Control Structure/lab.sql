-- 1 


DELIMITER $$

CREATE PROCEDURE CheckEmployeeDepartment(IN empId INT)
BEGIN
  DECLARE deptId INT;

  SELECT department_id INTO deptId FROM employees WHERE emp_id = empId;

  IF deptId = 10 THEN
    SELECT 'Employee is in department 10' AS Message;
  ELSE
    SELECT 'Employee is NOT in department 10' AS Message;
  END IF;
END$$

DELIMITER ;

-- Call the procedure (example for employee id 101)
CALL CheckEmployeeDepartment(101);



-- 2 
DELIMITER $$

CREATE PROCEDURE ListEmployeeNames()
BEGIN
  DECLARE done INT DEFAULT FALSE;
  DECLARE empName VARCHAR(100);
  DECLARE empCursor CURSOR FOR SELECT emp_name FROM employees;
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

  OPEN empCursor;

  read_loop: LOOP
    FETCH empCursor INTO empName;
    IF done THEN
      LEAVE read_loop;
    END IF;

    SELECT empName AS EmployeeName;
  END LOOP;

  CLOSE empCursor;
END$$

DELIMITER ;

-- Call the procedure
CALL ListEmployeeNames();
