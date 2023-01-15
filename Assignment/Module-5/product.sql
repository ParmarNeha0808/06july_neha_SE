-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 15, 2023 at 06:56 AM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.1.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `computer`
--

-- --------------------------------------------------------

--
-- Table structure for table `product`
--

CREATE TABLE `product` (
  `PRO_ID` int(10) DEFAULT NULL,
  `PRO_NAME` varchar(20) DEFAULT NULL,
  `PRO_PRICE` int(10) DEFAULT NULL,
  `PRO_COM` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `product`
--

INSERT INTO `product` (`PRO_ID`, `PRO_NAME`, `PRO_PRICE`, `PRO_COM`) VALUES
(101, 'Mother Board', 3200, 15),
(102, 'Key Board', 450, 16),
(103, 'ZIP driv', 250, 14),
(104, 'Speaker', 550, 16),
(105, 'Moniter', 5000, 11),
(106, 'DVD dirve', 900, 12),
(107, 'CD drive', 800, 12),
(108, 'Printer', 2600, 13),
(109, 'Refill cartridge', 350, 13),
(110, 'Mouse', 250, 12);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
