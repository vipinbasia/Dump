
<%@page import="com.harshit.search.Recommender"%>
<%@page import="com.sun.xml.internal.txw2.Document,com.harshit.search.Recommendation,java.util.*,com.harshit.index.*" %>
<%
String url="http://www.traileraddict.com/emd/";
int temp,temp1;
String movieId=(String)request.getParameter("hidden");
String trail=(String)request.getParameter("trailer");
session.setAttribute("movieID", movieId);

String userId=(String)session.getAttribute("userID");

String []movie=new String[4];
String []actor=new String[4];
String []gen=new String[4];
String []poster=new String[4];
String []id =new String[4];
String []trailer =new String[4];
int i=0;
System.out.println(trail +url);
HashMap<String,MovieInfo> theHashMap=Recommendation.getRecommendation(movieId, userId);
if(theHashMap!=null 		&& !theHashMap.isEmpty() && theHashMap.size()>0)
{

for (String name : theHashMap.keySet()) {
	  
	  movie[i]=theHashMap.get(name).getMovieName();
	   actor[i]=theHashMap.get(name).getActors();
	
	   gen[i]=theHashMap.get(name).getGenres();
	   poster[i]=theHashMap.get(name).getPosterURL();
	   id[i]=theHashMap.get(name).getMovieId();
	   trailer[i]=theHashMap.get(name).getTrailerID();
	   System.out.println("++++++"+theHashMap.get(name).getMovieId() +"****"+theHashMap.get(name).getMovieName());
	 i++;
	 if(i==4)
		 break;
	 
		  
		  
}
for(i=0;i<4;i++)
	
{
	if(actor[i]!=null)
	{
 temp=actor[i].indexOf(',');
 if(temp==-1)
	 continue;
 actor[i]=actor[i].substring(0, temp);
	}
 if(gen[i]!=null)
 {	temp1=gen[i].indexOf(',');
 if(temp1==-1)
	 continue;
 gen[i]=gen[i].substring(0,temp1);
 }
 if(poster[i].length()<5)
 {
	 poster[i]="images/no_image.jpg";
 }
 }

 
}

					
%>


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<link href="templatemo_style.css" rel="stylesheet" type="text/css" />
<script type="text/javascript" src="http://code.jquery.com/jquery-1.7.1.min.js"></script>
<script type="text/javascript">
function myFunction1( val,val1)								// on clicking a recommendation
{	document.index.trailer.value=val1;
	document.index.hidden.value=val;
	document.index.submit();
return true;
}															// on clicking a recommendation
	
self.setInterval(function(){clock();},15000);				// refreshing of a recommendation	
function clock()
{
	 
$	(document).ready(function(){
  
    $("#recommend").load("2.jsp");
  
});
	
	
}														// refreshing of a recommendation
																		
function rating(val)									// calculating ratings

{	
	
	var col=val.style.color;
	
	if(col!=null)
		{
		var check=document.getElementById('5');
		check.style.color='#202124';
		var check=document.getElementById('4');
		check.style.color='#202124';
		var check=document.getElementById('3');
		check.style.color='#202124';
		var check=document.getElementById('2');
		check.style.color='#202124';
		var check=document.getElementById('1');
		check.style.color='#202124';
		}
		
	
	
	val.style.color = '#CAD897';
	var value =val.id;
	
	if(value=='2')
		{
		var check=document.getElementById('1');
		check.style.color='#CAD897';
		}
	if(value=='3')
		{
		var check=document.getElementById('2');
		check.style.color='#CAD897';
		var check=document.getElementById('1');
		check.style.color='#CAD897';
		}
	if(value=='4')
		{
		var check=document.getElementById('3');
		check.style.color='#CAD897';
		var check=document.getElementById('2');
		check.style.color='#CAD897';
		var check=document.getElementById('1');
		check.style.color='#CAD897';
		}
	if(value=='5')
		{
		var check=document.getElementById('4');
		check.style.color='#CAD897';
		var check=document.getElementById('3');
		check.style.color='#CAD897';
		var check=document.getElementById('2');
		check.style.color='#CAD897';
		var check=document.getElementById('1');
		check.style.color='#CAD897';
		}
	document.index.rate_hidden.value=val;
}																			// calculating ratings
	
function submit_rating()
{
	
	$.post("rate.jsp");
	}
	
</script>


</head>

	<body>
	<form name="index" id="index" action="index.jsp">
	
		<div id="templatemo_container">
			<div id="templatemo_banner">
				<div id="logo"></div>


			</div>
			<input type="hidden" value="" name="rate_hidden" id="rate_hidden"/>
			<input type="hidden" value="" name="trailer" id="trailer"/>
			<input type="hidden" value="" name="hidden" id="hidden"/>
			<div id="template_container_vr">

				<div id="template_video_container">
					<div class="video fl">
					
<embed_standard>
						<object width="500" height="230">
							<param name="movie" value="" id="movie"></param>
					 
							 
							<param name="allowscriptaccess" value="always"></param>
							<param name="wmode" value="transparent"></param>
							<param name="allowfullscreen" value="true"></param>
							<embed src=" <%=url %><%=trail %>" type="application/x-shockwave-flash"
								wmode="transparent" allowfullscreen="true"
								allowscriptaccess="always" width="500" height="230"></embed>
						</object></embed_standard> 
						




					</div>
					 <div class="container">
<table>
<tr>
<td valign="bottom" height="230px">
		<ul class="rating-w-fonts">
			<li id="1" onclick="rating(this)" >R</li>
			<li id="2" onclick="rating(this)" > R</li>
			<li id="3" onclick="rating(this)">R</li>
			<li id="4" onclick="rating (this)">R</li>
			<li id="5" onclick="rating (this)">R</li>
		
			
		</ul>				
			<input type="button" id="rate_submit" value="submit" 
			onclick="submit_rating()"></input>
</td>	
</tr>
</table>
</div> 
				</div>




				<div class="margin_bottom_20 h_divider"></div>
				<div class="margin_bottom_20"></div>
<div id="heading">
<p> Recommendations for you :</p>
</div>
				<div id="recommend">


					<div class="column_w190 fl margin_right_40">
					
						<img width=180px height=115px; id="video1" src="<%=poster[0]%> " 
						alt="" onclick="return myFunction1('<%=id[0]%>','<%=trailer[0]%>');"/>

  
 <table >
	<tr valign="top">
		<td>Movie:</td>
	<td>	<%=movie[0] %> </td>	
	
	
	</tr>
		<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[0] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[0] %> </td>	
	
	
	</tr>
</table> 

						

					
					</div>

					<div class="column_w190 fl margin_right_40">
						<img width=180px; height=115px; id="video2" src="<%=poster[1] %>" 
						alt="" onclick="return myFunction1('<%=id[1]%>','<%=trailer[1]%>');"/>
 <table >
	<tr valign="top">
		<td>Movie :</td>
	<td>	<%=movie[1] %> </td>	
	
	
	</tr>
			<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[1] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[1] %> </td>	
	
	
	</tr>
</table> 

						 

					</div>

					<div class="column_w190 fl margin_right_40">
						<img width=180px; height=115px; id="video3" src="<%=poster[2] %> "
						 alt="" onclick="return myFunction1('<%=id[2]%>','<%=trailer[2]%>');"/>
						
 <table >
	<tr >
		<td>Movie :</td>
	<td>	<%=movie[2] %> </td>	
	
	
	</tr>
			<tr >	
		<td >Actors:</td>
	<td>	<%=actor[2] %> </td>	
	
	</tr>
		<tr >
		<td >Genres:</td>
	<td>	<%=gen[2] %> </td>	
	
	
	</tr>
</table> 

					</div>

					<div class="column_w190 fl" style="width:180px ; height:115px;" >
					<img width=180px; height=115px; id="video4" src="<%=poster[3] %>" alt="" 
					onclick="return myFunction1('<%=id[3]%>','<%=trailer[3]%>');"/>
	
 <table >
	<tr valign="top">
		<td>Movie :</td>
	<td>	<%=movie[3] %> </td>	
	
	
	</tr>
			<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[3] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[3] %> </td>	
	
	
	</tr>
</table> 

				</div>


			</div> 
		</div>
		</div>
</form>

	</body>

</html>