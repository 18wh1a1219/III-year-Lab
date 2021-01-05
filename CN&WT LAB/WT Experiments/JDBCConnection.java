import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class JDBCConnection {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/demo", "root", "1234");
			Statement st = con.createStatement();
			System.out.println("Connection Established.");
			ResultSet rs = st.executeQuery("select * from cart");
			while(rs.next()) {
				int empId = rs.getInt(1);
				int proId = rs.getInt(2);
				System.out.println(empId + "-" + proId);
			}
			st.close();
			con.close();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
