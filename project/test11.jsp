<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<%@page import="java.net.URLEncoder"%>
<%
String url = "http://ia.media-imdb.com/images/M/";
String url1 = "";
try{
	url1 = URLEncoder.encode("MV5BMTA5MDAwODcyNTVeQTJeQWpwZ15BbWU3MDQ4MTA2MjE@._V1_SX300.jpg","UTF-8");
}catch(Exception e){
	e.printStackTrace();
}
url = url.concat(url1);
System.out.println(url);
%>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
<div id="text">
Hello world this just a demo.
<img alt="testssss" src="<%=url %>">
</div>
</body>
</html>