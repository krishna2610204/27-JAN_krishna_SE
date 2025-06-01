-- 1

START TRANSACTION;

-- Create a savepoint
SAVEPOINT before_inserts;

-- Insert some records
INSERT INTO employees (emp_id, emp_name, department_id, salary) VALUES (101, 'Alice', 1, 60000);
INSERT INTO employees (emp_id, emp_name, department_id, salary) VALUES (102, 'Bob', 2, 55000);

-- Rollback to savepoint (undo inserts above)
ROLLBACK TO SAVEPOINT before_inserts;

-- Commit the transaction (nothing inserted since rollback)
COMMIT;


-- 2 

START TRANSACTION;

-- Insert a record and commit it immediately
INSERT INTO employees (emp_id, emp_name, department_id, salary) VALUES (103, 'Carol', 3, 70000);
COMMIT;

-- Start another transaction with savepoint
START TRANSACTION;

-- Create a savepoint
SAVEPOINT after_carol;

-- Insert more records
INSERT INTO employees (emp_id, emp_name, department_id, salary) VALUES (104, 'David', 2, 52000);
INSERT INTO employees (emp_id, emp_name, department_id, salary) VALUES (105, 'Eve', 1, 48000);

-- Rollback changes after savepoint (undo David and Eve)
ROLLBACK TO SAVEPOINT after_carol;

-- Commit remaining transaction (only Carol’s record remains)
COMMIT;
