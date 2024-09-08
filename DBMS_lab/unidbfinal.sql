--
-- PostgreSQL database dump
--

-- Dumped from database version 16.4 (Postgres.app)
-- Dumped by pg_dump version 16.4 (Postgres.app)

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

SET default_tablespace = '';

SET default_table_access_method = heap;

--
-- Name: course; Type: TABLE; Schema: public; Owner: banuprasadb
--

CREATE TABLE public.course (
    coursenumber character varying(10) NOT NULL,
    offeringdepartment character varying(10) NOT NULL,
    coursename character varying(100) NOT NULL,
    description text,
    credithours integer
);


ALTER TABLE public.course OWNER TO banuprasadb;

--
-- Name: department; Type: TABLE; Schema: public; Owner: banuprasadb
--

CREATE TABLE public.department (
    departmentcode character varying(10) NOT NULL,
    departmentname character varying(100) NOT NULL,
    officenumber character varying(10),
    officephone character varying(15),
    college character varying(100)
);


ALTER TABLE public.department OWNER TO banuprasadb;

--
-- Name: gradereport; Type: TABLE; Schema: public; Owner: banuprasadb
--

CREATE TABLE public.gradereport (
    ssn character(10) NOT NULL,
    sectionnumber character varying(10) NOT NULL,
    coursenumber character varying(10) NOT NULL,
    offeringdepartment character varying(10) NOT NULL,
    semester character varying(10) NOT NULL,
    year integer NOT NULL,
    grade character(1),
    CONSTRAINT gradereport_grade_check CHECK ((grade = ANY (ARRAY['A'::bpchar, 'B'::bpchar, 'C'::bpchar, 'D'::bpchar])))
);


ALTER TABLE public.gradereport OWNER TO banuprasadb;

--
-- Name: section; Type: TABLE; Schema: public; Owner: banuprasadb
--

CREATE TABLE public.section (
    sectionnumber character varying(10) NOT NULL,
    coursenumber character varying(10) NOT NULL,
    offeringdepartment character varying(10) NOT NULL,
    instructor character varying(100),
    semester character varying(10) NOT NULL,
    year integer NOT NULL
);


ALTER TABLE public.section OWNER TO banuprasadb;

--
-- Name: student; Type: TABLE; Schema: public; Owner: banuprasadb
--

CREATE TABLE public.student (
    ssn character(10) NOT NULL,
    name character varying(100) NOT NULL,
    address character varying(255),
    phone character varying(15),
    birthdate date,
    majordepartment character varying(10),
    degreeprogram character varying(10)
);


ALTER TABLE public.student OWNER TO banuprasadb;

--
-- Data for Name: course; Type: TABLE DATA; Schema: public; Owner: banuprasadb
--

COPY public.course (coursenumber, offeringdepartment, coursename, description, credithours) FROM stdin;
CS1002-1	CS	Object Oriented Programming	Introduction to object oriented programming using Java	4
EC1001-1	EC	Basic Electronics	Introduction to Electronics	3
AD1002-1	AIDS	Cloud Computing	Fundamentals of Cloud Computing	4
AM1001-1	AIML	Machine Learning	Fundamentals of Machine Learning	4
RA1002-1	RAI	Robot Configuration	Basic introduction to robots	3
EE1001-1	EEE	Basic Electrical Engineering	Introduction to Electricals	4
MA1003-2	MATH	Calculus	Basic to advance calculus	3
BT1001-1	BT	Biotechnology Fundamentals	Introduction to biotechnology principles	3
CV1001-1	CV	Civil Engineering Basics	Foundations of civil engineering	3
CC1001-2	CCE	Communication Engineering	Principles of communication systems	3
FS1001-2	FS	Full Stack Development	Building web applications using modern frameworks	4
CY1001-1	CY	Cybersecurity Essentials	Introduction to cybersecurity practices	3
VSLI1001-2	VLSI	Very Large Scale Integration Design	Advanced VLSI circuit design techniques	4
ACT1001-1	ACT	Advances in Electronics and Communication	Emerging trends in E&C field	3
IS1001-2	ISE	Information Science and Engineering	Data management and analysis	3
ME1001-1	ME	Mechanical Engineering Principles	Fundamentals of mechanical systems	3
\.


--
-- Data for Name: department; Type: TABLE DATA; Schema: public; Owner: banuprasadb
--

COPY public.department (departmentcode, departmentname, officenumber, officephone, college) FROM stdin;
CS	Computer Science	LH500	08258-123456	NMAMIT
EC	Electronics and Communication	LH300	08258-56729	NMAMIT
AIDS	Artificial Intelligence and Data Science	NC600	08258-77681	NMAMIT
AIML	Aritificial Intelligence and Machine Learning	NC500	-91342	NMAMIT
RAI	Robotics and Artifical Intelligence	RH200	08528-533798	NMAMIT
EEE	Electrical and Electronics	NC300	08528-776542	NMAMIT
MATH	Mathematics	LC300	08528-765390	NMAMIT
BT	Biotechnology	1234	555-1234	NMAMIT
CV	Civil Engineering	2345	555-2345	NMAMIT
CCE	Computer & Communication Engineering	3456	555-3456	NMAMIT
FS	Computer Science (Full Stack Development)	4567	555-4567	NMAMIT
CY	Computer Science & Engineering(Cyber Security)	5678	555-5678	NMAMIT
ACT	Electronics & Communication (ACT)	7890	555-7890	NMAMIT
ISE	Information Science & Engineering	8901	555-8901	NMAMIT
ME	Mechanical Engineering	9012	555-9012	NMAMIT
VLSI	Electronics Engineering (VLSI Design & Technology)	6789	555-6789	NMAMIT
\.


--
-- Data for Name: gradereport; Type: TABLE DATA; Schema: public; Owner: banuprasadb
--

COPY public.gradereport (ssn, sectionnumber, coursenumber, offeringdepartment, semester, year, grade) FROM stdin;
NNM22AD017	M	MA1003-2	MATH	III	2023	B
NNM22AD017	C	CS1002-1	CS	III	2023	C
NNM22EC069	F	EE1001-1	EEE	I	2022	A
NNM22EC069	E	EC1001-1	EC	II	2022	A
NNM22EC069	M	MA1003-2	MATH	III	2023	B
NNM22RI027	R	RA1002-1	RAI	I	2022	C
NNM22RI027	J	AM1001-1	AIML	IV	2024	B
NNM22RI027	C	CS1002-1	CS	III	2023	D
NNM22AM066	J	AM1001-1	AIML	IV	2024	B
NNM22AM066	L	AD1002-1	AIDS	V	2024	C
NNM22EE051	E	EC1001-1	EC	II	2022	A
NNM22EE051	F	EE1001-1	EEE	I	2022	A
NNM22EE051	R	RA1002-1	RAI	I	2022	B
NNM22CS168	C	CS1002-1	CS	III	2023	B
NNM22CS168	L	AD1002-1	AIDS	V	2024	A
NNM22CS168	J	AM1001-1	AIML	IV	2024	A
NNM22CS168	R	RA1002-1	RAI	I	2022	B
NNM22CS168	F	EE1001-1	EEE	I	2022	D
NNM22CS168	M	MA1003-2	MATH	III	2023	C
NNM23EC037	E	EC1001-1	EC	II	2022	B
NNM23EC037	F	EE1001-1	EEE	I	2022	B
NNM23EC037	M	MA1003-2	MATH	III	2023	C
NNM23EC037	R	RA1002-1	RAI	I	2022	A
NNM22ME003	BB	BT1001-1	BT	I	2023	D
NNM22ME004	BB	BT1001-1	BT	I	2023	A
NNM22RI004	BB	BT1001-1	BT	I	2023	D
NNM22AM066	C	CS1002-1	CS	III	2023	B
NNM22AD002	C	CS1002-1	CS	III	2023	C
NNM22RI003	C	CS1002-1	CS	III	2023	A
NNM23EV002	CA	ACT1001-1	ACT	VIII	2029	A
NNM23EV003	CA	ACT1001-1	ACT	VIII	2029	B
NNM23EV005	CA	ACT1001-1	ACT	VIII	2029	B
NNM22AD002	CC	CC1001-2	CCE	III	2025	B
NNM22RI003	CC	CC1001-2	CCE	III	2025	B
NNM22RI004	CC	CC1001-2	CCE	III	2025	C
NNM22EE003	E	EC1001-1	EC	II	2022	C
NNM22EE004	E	EC1001-1	EC	II	2022	C
NNM23FS003	EM	ME1001-1	ME	II	2031	C
NNM23FS004	EM	ME1001-1	ME	II	2031	C
NNM23FS005	EM	ME1001-1	ME	II	2031	D
NNM23CY004	EM	ME1001-1	ME	II	2031	A
NNM22AD017	F	EE1001-1	EEE	I	2022	C
NNM22AM066	F	EE1001-1	EEE	I	2022	A
NNM22AD001	F	EE1001-1	EEE	I	2022	B
NNM23CY005	F	EE1001-1	EEE	I	2022	B
NNM22RI004	F	EE1001-1	EEE	I	2022	C
NNM22AD017	J	AM1001-1	AIML	IV	2024	A
NNM22EC069	J	AM1001-1	AIML	IV	2024	B
NNM22RI004	J	AM1001-1	AIML	IV	2024	C
NNM22AD017	L	AD1002-1	AIDS	V	2024	A
NNM22RI004	L	AD1002-1	AIDS	V	2024	A
NNM22EE051	M	MA1003-2	MATH	III	2023	B
NNM22RI027	M	MA1003-2	MATH	III	2023	B
NNM22EV003	M	MA1003-2	MATH	III	2023	D
NNM22EV004	M	MA1003-2	MATH	III	2023	D
NNM22EC123	R	RA1002-1	RAI	I	2022	B
NNM22EC456	R	RA1002-1	RAI	I	2022	D
NNM22EE001	R	RA1002-1	RAI	I	2022	A
NNM22EE002	R	RA1002-1	RAI	I	2022	A
NNM22RI003	R	RA1002-1	RAI	I	2022	D
NNM22RI004	R	RA1002-1	RAI	I	2022	A
NNM22AD017	SF	FS1001-2	FS	IV	2026	C
NNM22AM066	SF	FS1001-2	FS	IV	2026	B
NNM22RI004	SF	FS1001-2	FS	IV	2026	A
NNM22AD017	SI	IS1001-2	ISE	I	2030	A
NNM22AM066	SI	IS1001-2	ISE	I	2030	C
NNM22CS168	SI	IS1001-2	ISE	I	2030	B
NNM22EC069	SI	IS1001-2	ISE	I	2030	D
NNM22EE004	SI	IS1001-2	ISE	I	2030	A
NNM22AD017	SV	VSLI1001-2	VLSI	VI	2028	A
NNM23CY005	SV	VSLI1001-2	VLSI	VI	2028	B
NNM22EE001	SV	VSLI1001-2	VLSI	VI	2028	B
\.


--
-- Data for Name: section; Type: TABLE DATA; Schema: public; Owner: banuprasadb
--

COPY public.section (sectionnumber, coursenumber, offeringdepartment, instructor, semester, year) FROM stdin;
C	CS1002-1	CS	Dr. Venugopala PS	III	2023
E	EC1001-1	EC	Dr. Durga Prasad	II	2022
L	AD1002-1	AIDS	Mr. Praveen Naik	V	2024
J	AM1001-1	AIML	Mr. Sudesh	IV	2024
R	RA1002-1	RAI	Mr. DJ khaled	I	2022
M	MA1003-2	MATH	Ms. Bhavya D	III	2023
F	EE1001-1	EEE	Mr. Naveen J	I	2022
BB	BT1001-1	BT	Prof. Maria Rodriguez	I	2023
VC	CV1001-1	CV	Dr. John Lee	II	2024
CC	CC1001-2	CCE	Assoc. Prof. Sarah Taylor	III	2025
SF	FS1001-2	FS	Ms. Emily Chen	IV	2026
YC	CY1001-1	CY	Prof. David Kim	V	2027
SV	VSLI1001-2	VLSI	Dr. Lisa Nguyen	VI	2028
CA	ACT1001-1	ACT	Assoc. Prof. Michael Patel	VIII	2029
SI	IS1001-2	ISE	Prof. Rachel Brown	I	2030
EM	ME1001-1	ME	Dr. Kevin White	II	2031
\.


--
-- Data for Name: student; Type: TABLE DATA; Schema: public; Owner: banuprasadb
--

COPY public.student (ssn, name, address, phone, birthdate, majordepartment, degreeprogram) FROM stdin;
NNM22AD017	Banuprasad	Surathkal	2233445566	2004-05-08	AIDS	B.E
NNM22AM066	Thushar	Mukka	7687908824	2004-03-10	AIML	B.Tech
NNM22CS168	Satvik	Chelar	6688564901	2004-09-19	CS	B.Tech
NNM22EC069	Siddharth	Mukka	9945157728	2004-08-12	EC	B.Tech
NNM23EC037	Jazeel	Krishnapura	8905675431	2004-06-06	EC	B.Tech
NNM22EE051	Chethan	Nitte	7897890022	2004-07-07	EEE	B.Tech
NNM22RI027	Kaushik	Mangalore	5678944590	2004-07-10	RAI	B.Tech
NNM22EC123	Alice Johnson	123 Maple St	555-6789	2004-01-15	EC	B.Tech
NNM22EC456	Bob Smith	456 Oak St	555-9876	2004-11-20	EC	B.Tech
NNM22EC789	Charlie Davis	789 Pine St	555-1111	2004-06-30	EC	B.Tech
NNM22CS001	David Lee	101 Cedar St	555-2222	2004-03-12	CS	B.Tech
NNM22CS002	Emily Chen	202 Walnut Ave	555-3333	2004-08-25	CS	B.Tech
NNM22CS003	Frank Kim	303 Elm St	555-4444	2004-05-07	CS	B.Tech
NNM22CS004	Grace Patel	404 Oakwood Dr	555-5555	2004-10-28	CS	B.Tech
NNM22AD001	Hannah Brown	505 Maple St	555-6666	2004-02-18	AIDS	B.Tech
NNM22AD002	Isaac White	606 Pine Ave	555-7777	2004-09-01	AIDS	B.Tech
NNM22AD003	Julia Martin	707 Cedar Dr	555-8888	2004-04-22	AIDS	B.Tech
NNM22AD004	Kevin Hall	808 Walnut St	555-9999	2004-07-15	AIDS	B.Tech
NNM22AM001	Laura Taylor	909 Oak St	351-8271	2004-03-21	AIML	B.Tech
NNM22AM002	Michael Brooks	1010 Maple Ave	192-4638	2004-08-29	AIML	B.Tech
NNM22AM003	Nicole Garcia	1111 Cedar Dr	628-1937	2004-05-14	AIML	B.Tech
NNM22AM004	Oliver Thompson	1212 Walnut St	817-3542	2004-10-17	AIML	B.Tech
NNM22BT001	Patricia Jenkins	1313 Pine St	275-8192	2004-02-25	BT	B.Tech
NNM22BT002	Quincy Rodriguez	1414 Cedar Ave	463-9517	2004-09-05	BT	B.Tech
NNM22BT003	Rachel Lee	1515 Maple Dr	138-7429	2004-04-28	BT	B.Tech
NNM22BT004	Samuel Kim	1616 Walnut St	627-8531	2004-07-20	BT	B.Tech
NNM22BT005	Tessa Martin	1717 Oakwood Dr	982-1358	2004-10-31	BT	B.Tech
NNM22CV001	Uma Patel	New Delhi	419-8523	2004-01-16	CV	B.Tech
NNM22CV002	Victor Singh	Chennai	637-2918	2004-06-19	CV	B.Tech
NNM22CV003	Wendy Chen	Faridabad	953-4172	2004-03-23	CV	B.Tech
NNM22CV004	Xavier Lee	Hyderabad	189-6357	2004-08-26	CV	B.Tech
NNM22CV005	Yasmin Ali	Bangalore	752-4189	2004-05-13	CV	B.Tech
NNM22CC001	Zara Khan	Mumbai	813-4521	2004-02-22	CCE	B.Tech
NNM22CC002	Abdul Hassan	Kolkata	629-1873	2004-07-09	CCE	B.Tech
NNM22CC003	Fatima Ali	Ahmedabad	473-9825	2004-03-24	CCE	B.Tech
NNM22CC004	Javed Patel	Surat	219-1357	2004-08-27	CCE	B.Tech
NNM22CC005	Nalini Singh	Jaipur	982-7531	2004-05-01	CCE	B.Tech
NNM23FS001	Rahul Desai	Pune	826-3157	2003-01-15	FS	B.Tech
NNM23FS002	Sofia Rodrigues	Lucknow	943-6721	2003-06-28	FS	B.Tech
NNM23FS003	Tanmay Jain	Indore	379-8512	2003-03-22	FS	B.Tech
NNM23FS004	Utkarsh Verma	Vadodara	617-4938	2003-09-11	FS	B.Tech
NNM23FS005	Vaishali Sharma	Coimbatore	572-1398	2003-04-25	FS	B.Tech
NNM23CY001	Akash Mehta	Nagpur	941-6735	2003-02-18	CY	B.Tech
NNM23CY002	Bhavna Seth	Amritsar	278-9351	2003-07-31	CY	B.Tech
NNM23CY003	Chirag Pandey	Mysore	519-4823	2003-03-29	CY	B.Tech
NNM23CY004	Disha Bansal	Varanasi	695-1827	2003-08-22	CY	B.Tech
NNM23CY005	Esha Gupta	Bhopal	983-4512	2003-05-05	CY	B.Tech
NNM22EE001	Faisal Khan	Ghaziabad	937-6521	2002-01-20	EEE	B.Tech
NNM22EE002	Gaurav Singh	Jalandhar	283-9857	2002-06-15	EEE	B.Tech
NNM22EE003	Harshita Rao	Kochi	619-4723	2002-03-28	EEE	B.Tech
NNM22EE004	Inderjeet Singh	Raipur	475-1832	2002-08-12	EEE	B.Tech
NNM22EV001	Jatin Chawla	Agra	936-1857	2002-02-05	VLSI	B.Tech
NNM22EV002	Komal Aggarwal	Bhubaneswar	279-9521	2002-07-19	VLSI	B.Tech
NNM22EV003	Lakshmi Narayanan	Chandigarh	518-3872	2002-03-22	VLSI	B.Tech
NNM22EV004	Manoj Kumar	Dehradun	693-1578	2002-08-26	VLSI	B.Tech
NNM22EV005	Neha Rastogi	Ernakulam	485-9321	2002-05-01	VLSI	B.Tech
NNM23EV001	Omkar Joshi	Imphal	936-1521	2003-01-22	ACT	B.Tech
NNM23EV002	Priya Srinivasan	Itanagar	284-6321	2003-06-18	ACT	B.Tech
NNM23EV003	Qamar Ansley	Jammu	517-9382	2003-03-25	ACT	B.Tech
NNM23EV004	Rohan Khanna	Shillong	679-1521	2003-08-01	ACT	B.Tech
NNM23EV005	Sarah Thomas	Aizawl	382-6321	2003-04-29	ACT	B.Tech
NNM22IS001	Tanya Das	Agartala	936-1521	2002-02-21	ISE	B.Tech
NNM22IS002	Ujjwal Kumar	Dispur	284-6321	2002-07-30	ISE	B.Tech
NNM22IS003	Vijay Singh	Panaji	517-9382	2002-03-25	ISE	B.Tech
NNM22IS004	Waqas Ahmed	Ranchi	679-1521	2002-08-01	ISE	B.Tech
NNM22IS005	Xavier Fernandes	Shimla	382-6321	2002-04-29	ISE	B.Tech
NNM22ME001	Yogesh Patil	Bhopal	936-1521	2002-01-22	ME	B.Tech
NNM22ME002	Zara Begum	Chandigarh	284-6321	2002-06-18	ME	B.Tech
NNM22ME003	Ankit Mittal	Dehradun	517-9382	2002-03-25	ME	B.Tech
NNM22ME004	Bhavya Singh	Gangtok	679-1521	2002-08-01	ME	B.Tech
NNM22ME005	Chaitanya Reddy	Hyderabad	382-6321	2002-04-29	ME	B.Tech
NNM22RI001	Kiran Thakur	Amaravati	936-1521	2002-01-22	RAI	B.Tech
NNM22RI002	Laxmi Devi	Bhubaneswar	284-6321	2002-06-18	RAI	B.Tech
NNM22RI003	Madhu Menon	Chennai	517-9382	2002-03-25	RAI	B.Tech
NNM22RI004	Nalini Kumari	Dispur	679-1521	2002-08-01	RAI	B.Tech
\.


--
-- Name: course course_pkey; Type: CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.course
    ADD CONSTRAINT course_pkey PRIMARY KEY (coursenumber, offeringdepartment);


--
-- Name: department department_pkey; Type: CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.department
    ADD CONSTRAINT department_pkey PRIMARY KEY (departmentcode);


--
-- Name: gradereport gradereport_pkey; Type: CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.gradereport
    ADD CONSTRAINT gradereport_pkey PRIMARY KEY (ssn, sectionnumber, coursenumber, offeringdepartment, semester, year);


--
-- Name: section section_pkey; Type: CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.section
    ADD CONSTRAINT section_pkey PRIMARY KEY (sectionnumber, coursenumber, offeringdepartment, semester, year);


--
-- Name: student student_pkey; Type: CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.student
    ADD CONSTRAINT student_pkey PRIMARY KEY (ssn);


--
-- Name: course course_offeringdepartment_fkey; Type: FK CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.course
    ADD CONSTRAINT course_offeringdepartment_fkey FOREIGN KEY (offeringdepartment) REFERENCES public.department(departmentcode);


--
-- Name: gradereport gradereport_sectionnumber_coursenumber_offeringdepartment__fkey; Type: FK CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.gradereport
    ADD CONSTRAINT gradereport_sectionnumber_coursenumber_offeringdepartment__fkey FOREIGN KEY (sectionnumber, coursenumber, offeringdepartment, semester, year) REFERENCES public.section(sectionnumber, coursenumber, offeringdepartment, semester, year);


--
-- Name: gradereport gradereport_ssn_fkey; Type: FK CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.gradereport
    ADD CONSTRAINT gradereport_ssn_fkey FOREIGN KEY (ssn) REFERENCES public.student(ssn) ON DELETE CASCADE;


--
-- Name: section section_coursenumber_offeringdepartment_fkey; Type: FK CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.section
    ADD CONSTRAINT section_coursenumber_offeringdepartment_fkey FOREIGN KEY (coursenumber, offeringdepartment) REFERENCES public.course(coursenumber, offeringdepartment);


--
-- Name: student student_majordepartment_fkey; Type: FK CONSTRAINT; Schema: public; Owner: banuprasadb
--

ALTER TABLE ONLY public.student
    ADD CONSTRAINT student_majordepartment_fkey FOREIGN KEY (majordepartment) REFERENCES public.department(departmentcode);


--
-- PostgreSQL database dump complete
--

