<%@page import="com.harshit.search.Recommender"%>
<%@page import="com.sun.xml.internal.txw2.Document,com.harshit.search.Recommendation,java.util.*,com.harshit.index.*" %>

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%
    String value=request.getParameter("ratae_hidden");
    if(value == null || value.trim().length() == 0){
        value = "0" ;//use a zero if all we have is whitespace or if the value is null
     }

     int intValue = 0;//store the integer version (which won't have leading zeros)
     try{
        intValue = Integer.parseInt(value);//process the number
     }
     catch(Exception e){
       intValue = 0;//use 0 if there's a problem
     }
    
    String userId=(String)session.getAttribute("userID");
    String movieId=(String)session.getAttribute("movieID");
    Recommendation.addInfo(userId, movieId, intValue);
   System.out.println("hello");
    %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>

</body>
</html>