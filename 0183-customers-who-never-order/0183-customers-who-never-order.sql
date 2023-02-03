# Write your MySQL query statement below
# select name as Customers 
# from Customers left join Orders on Customers.id = Orders.customerId 
# where Orders.customerId is null;

select customers.name as 'Customers'
from customers
where customers.id not in
(
    select customerid from orders
);